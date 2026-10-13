"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 136."""

def spec_graphene_hardened_malloc_136() -> dict:
    return {"system": "GrapheneOS", "spec_id": 136, "quarantine_slabs": 9, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_136():
    s = spec_graphene_hardened_malloc_136()
    assert s["spec_id"] == 136
