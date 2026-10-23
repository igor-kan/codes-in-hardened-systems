"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1036."""

def spec_graphene_hardened_malloc_1036() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1036, "quarantine_slabs": 13, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1036():
    s = spec_graphene_hardened_malloc_1036()
    assert s["spec_id"] == 1036
