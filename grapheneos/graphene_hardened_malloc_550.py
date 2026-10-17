"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 550."""

def spec_graphene_hardened_malloc_550() -> dict:
    return {"system": "GrapheneOS", "spec_id": 550, "quarantine_slabs": 7, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_550():
    s = spec_graphene_hardened_malloc_550()
    assert s["spec_id"] == 550
